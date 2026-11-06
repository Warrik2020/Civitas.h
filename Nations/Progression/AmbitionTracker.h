#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Progression
{
    class AmbitionTracker : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AmbitionTracker(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Progression", "AmbitionTracker") {}
    public:
        bool IsDone(const char* id) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(id ? id : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStaticValue<bool>("IsDone", __callArgs, 1); }
        int BaselineOf(int slot) const { void* __callArgs[] = { &slot }; return CallStaticValue<int>("BaselineOf", __callArgs, 1); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void Restore(int nation, int band, void* baselines, void* done) const { void* __callArgs[] = { &nation, &band, baselines, done }; CallStatic("Restore", __callArgs, 4); }
        void Capture(int& nation, int& band, void* baselines, void* done) const { void* __callArgs[] = { &nation, &band, &baselines, &done }; CallStatic("Capture", __callArgs, 4); }
    };
}
