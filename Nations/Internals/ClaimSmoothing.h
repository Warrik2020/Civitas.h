#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class ClaimSmoothing : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ClaimSmoothing(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "ClaimSmoothing") {}
    public:
        int RadiusFor(int smallestPiece) const { void* __callArgs[] = { &smallestPiece }; return CallStaticValue<int>("RadiusFor", __callArgs, 1); }
        int Smooth(int width, int height, void* land, void* claims, void* pinned) const { void* __callArgs[] = { &width, &height, land, claims, pinned }; return CallStaticValue<int>("Smooth", __callArgs, 5); }
        int Smooth(int width, int height, void* land, void* claims, void* pinned, int& radius) const { void* __callArgs[] = { &width, &height, land, claims, pinned, &radius }; return CallStaticValue<int>("Smooth", __callArgs, 6); }
        int MinRadius() const { return ReadStaticField<int>("MinRadius"); }
        int MaxRadius() const { return ReadStaticField<int>("MaxRadius"); }
    };
}
