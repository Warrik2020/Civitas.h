#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class PeoplesFacts : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeoplesFacts(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "PeoplesFacts") {}
    public:
        float landShare() const { return ReadField<float>("landShare"); }
        void SetLandShare(float value) const { WriteField<float>("landShare", value); }
        float warScore() const { return ReadField<float>("warScore"); }
        void SetWarScore(float value) const { WriteField<float>("warScore", value); }
        float peopleShare() const { return ReadField<float>("peopleShare"); }
        void SetPeopleShare(float value) const { WriteField<float>("peopleShare", value); }
        bool doctrine() const { return ReadField<bool>("doctrine"); }
        void SetDoctrine(bool value) const { WriteField<bool>("doctrine", value); }
        bool kinRecipient() const { return ReadField<bool>("kinRecipient"); }
        void SetKinRecipient(bool value) const { WriteField<bool>("kinRecipient", value); }
    };
}
