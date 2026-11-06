#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class PeaceGrant : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeaceGrant(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "PeaceGrant") {}
    public:
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        bool kin() const { return ReadField<bool>("kin"); }
        void SetKin(bool value) const { WriteField<bool>("kin", value); }
        void* tiles() const { return ReadField<void*>("tiles"); }
    };
}
