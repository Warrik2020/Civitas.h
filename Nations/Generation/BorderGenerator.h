#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Generation
{
    class BorderGenerator : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BorderGenerator(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Generation", "BorderGenerator") {}
    public:
        void* Generate(void* grid, void* existingCapitals, int minSeparation, void* s) const { void* args[] = { grid, existingCapitals, &minSeparation, s }; return CallStatic("Generate", args, 4); }
        uint8_t At(int x, int y) const { void* args[] = { &x, &y }; return CallValue<uint8_t>("At", args, 2); }
        void* regions() const { return ReadField<void*>("regions"); }
        void SetRegions(void* value) const { WriteField<void*>("regions", value); }
        int seed() const { return ReadField<int>("seed"); }
        void SetSeed(int value) const { WriteField<int>("seed", value); }
        int freeLand() const { return ReadField<int>("freeLand"); }
        void SetFreeLand(int value) const { WriteField<int>("freeLand", value); }
        int claimed() const { return ReadField<int>("claimed"); }
        void SetClaimed(int value) const { WriteField<int>("claimed", value); }
        int strays() const { return ReadField<int>("strays"); }
        void SetStrays(int value) const { WriteField<int>("strays", value); }
        int surveyed() const { return ReadField<int>("surveyed"); }
        void SetSurveyed(int value) const { WriteField<int>("surveyed", value); }
        void* failure() const { return ReadField<void*>("failure"); }
        void SetFailure(void* value) const { WriteField<void*>("failure", value); }
        int MaxNoise() const { return ReadStaticField<int>("MaxNoise"); }
    };
}
