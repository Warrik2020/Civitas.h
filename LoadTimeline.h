#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "CivitasCore.h"

namespace CivitasPoly
{
    class LoadTimeline : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LoadTimeline(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly", "LoadTimeline") {}
    public:
        void Begin() const { CallStatic("Begin", nullptr, 0); }
        void Mark(const char* step) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(step ? step : "") : nullptr; void* __callArgs[] = { managed_0 }; CallStatic("Mark", __callArgs, 1); }
        void End(const char* step, const char* what) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(step ? step : "") : nullptr; void* managed_1 = Api() && Api()->NewString ? Api()->NewString(what ? what : "") : nullptr; void* __callArgs[] = { managed_0, managed_1 }; CallStatic("End", __callArgs, 2); }
    };
}
