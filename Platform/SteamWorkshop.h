#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Platform
{
    class SteamWorkshop : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SteamWorkshop(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Platform", "SteamWorkshop") {}
    public:
        void OpenItemPage(uint64_t fileId) const { void* __callArgs[] = { &fileId }; CallStatic("OpenItemPage", __callArgs, 1); }
        void OpenLegalAgreement() const { CallStatic("OpenLegalAgreement", nullptr, 0); }
        void Publish(void* req, void* done) const { void* __callArgs[] = { req, done }; CallStatic("Publish", __callArgs, 2); }
        void Poll() const { CallStatic("Poll", nullptr, 0); }
    };
}
