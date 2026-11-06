#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Platform
{
    class SteamAchievements : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SteamAchievements(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Platform", "SteamAchievements") {}
    public:
        bool Earned(const char* apiName) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(apiName ? apiName : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStaticValue<bool>("Earned", __callArgs, 1); }
        bool Unlock(const char* apiName) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(apiName ? apiName : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStaticValue<bool>("Unlock", __callArgs, 1); }
        void* Citizenship() const { return ReadStaticField<void*>("Citizenship"); }
    };
}
