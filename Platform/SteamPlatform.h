#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Platform
{
    class SteamPlatform : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SteamPlatform(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Platform", "SteamPlatform") {}
    public:
        uint32_t AppId() const { return ReadStaticField<uint32_t>("AppId"); }
    };
}
