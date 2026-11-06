#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class UnifyHost : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnifyHost(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "UnifyHost") {}
    public:
        int host() const { return ReadField<int>("host"); }
        void SetHost(int value) const { WriteField<int>("host", value); }
        int people() const { return ReadField<int>("people"); }
        void SetPeople(int value) const { WriteField<int>("people", value); }
        float share() const { return ReadField<float>("share"); }
        void SetShare(float value) const { WriteField<float>("share", value); }
        int standing() const { return ReadField<int>("standing"); }
        void SetStanding(int value) const { WriteField<int>("standing", value); }
        bool accepted() const { return ReadField<bool>("accepted"); }
        void SetAccepted(bool value) const { WriteField<bool>("accepted", value); }
        bool homeRule() const { return ReadField<bool>("homeRule"); }
        void SetHomeRule(bool value) const { WriteField<bool>("homeRule", value); }
    };
}
