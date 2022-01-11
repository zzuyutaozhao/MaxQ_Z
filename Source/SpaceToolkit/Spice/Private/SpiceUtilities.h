// Copyright 2021 Gamergenic.  See full copyright notice in Spice.h.
// Author: chucknoble@gamergenic.com|https://www.gamergenic.com
// 
// Implementation of:
// "Adding Third-Party Libraries to Unreal Engine : NASA's SPICE Toolkit"
// https://gamedevtricks.com/post/third-party-libs-1/


#pragma once

#include "CoreMinimal.h"
#include "SpiceTypes.h"

PRAGMA_PUSH_PLATFORM_DEFAULT_PACKING
extern "C"
{
#include "SpiceUsr.h"
}
PRAGMA_POP_PLATFORM_DEFAULT_PACKING

// This is private header to the module so we don't need a namespace
// to protect external users.  But, these are common names so putting
// them in a namespace will at least let us qualify the name if needed.
namespace SpiceUtilities
{
    extern const double pi;
    extern const double twopi;
    extern const double dpr;
    extern const double rpd;

    extern const float dprf;
    extern const float rpdf;
}

// Utilities useful when interacting with CSPICE

FString toPath(const FString& file);

template<class T>
inline void ZeroOut(T(&value)[3][3])
{
    memset(value, 0, sizeof(value));
}

template<class T>
inline void ZeroOut(T(&value)[6][6])
{
    memset(value, 0, sizeof(value));
}


template<class T>
inline void ZeroOut(T& value)
{
    memset(&value, 0, sizeof(value));
}

void CopyFrom(const SpicePlane& _plane, FSPlane& dest);
void CopyTo(const FSPlane& src, SpicePlane& _plane);
void CopyFrom(const SpiceEllipse& _ellipse, FSEllipse& dest);
void CopyTo(const FSEllipse& src, SpiceEllipse& _ellipse);

uint8 ErrorCheck(ES_ResultCode& ResultCode, FString& ErrorMessage);
uint8 UnexpectedErrorCheck(bool bReset = true);

