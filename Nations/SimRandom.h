#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class SimRandom : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SimRandom(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "SimRandom") {}
    public:
        void Seed(int seed) const { void* __callArgs[] = { &seed }; CallStatic("Seed", __callArgs, 1); }
        bool TryGetSimState(void* s) const { void* __callArgs[] = { &s }; return CallStaticValue<bool>("TryGetSimState", __callArgs, 1); }
        void Enter() const { CallStatic("Enter", nullptr, 0); }
        void Leave() const { CallStatic("Leave", nullptr, 0); }
        bool Isolate() const { return ReadStaticField<bool>("Isolate"); }
        void Isolate(bool value) const { WriteStaticField<bool>("Isolate", value); }
    };
}
