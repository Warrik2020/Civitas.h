#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "CivitasCore.h"

namespace CivitasPoly
{
    class WorldLoadProgress : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WorldLoadProgress(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly", "WorldLoadProgress") {}
    public:
        void Report(const char* stage, float fraction) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(stage ? stage : "") : nullptr; void* __callArgs[] = { managed_0, &fraction }; CallStatic("Report", __callArgs, 2); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
    };
}
