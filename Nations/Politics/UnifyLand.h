#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class UnifyLand : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnifyLand(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "UnifyLand") {}
    public:
        int state() const { return ReadField<int>("state"); }
        void SetState(int value) const { WriteField<int>("state", value); }
        int holder() const { return ReadField<int>("holder"); }
        void SetHolder(int value) const { WriteField<int>("holder", value); }
        bool realm() const { return ReadField<bool>("realm"); }
        void SetRealm(bool value) const { WriteField<bool>("realm", value); }
        bool people() const { return ReadField<bool>("people"); }
        void SetPeople(bool value) const { WriteField<bool>("people", value); }
        bool claim() const { return ReadField<bool>("claim"); }
        void SetClaim(bool value) const { WriteField<bool>("claim", value); }
    };
}
