#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class ClaimEvidence : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ClaimEvidence(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "ClaimEvidence") {}
    public:
        bool Has(int r, void* cfg) const { void* args[] = { &r, cfg }; return CallValue<bool>("Has", args, 2); }
        float peopleShare() const { return ReadField<float>("peopleShare"); }
        void SetPeopleShare(float value) const { WriteField<float>("peopleShare", value); }
        float faithShare() const { return ReadField<float>("faithShare"); }
        void SetFaithShare(float value) const { WriteField<float>("faithShare", value); }
        float tongueShare() const { return ReadField<float>("tongueShare"); }
        void SetTongueShare(float value) const { WriteField<float>("tongueShare", value); }
        float homelandShare() const { return ReadField<float>("homelandShare"); }
        void SetHomelandShare(float value) const { WriteField<float>("homelandShare", value); }
        bool borders() const { return ReadField<bool>("borders"); }
        void SetBorders(bool value) const { WriteField<bool>("borders", value); }
        bool identityLive() const { return ReadField<bool>("identityLive"); }
        void SetIdentityLive(bool value) const { WriteField<bool>("identityLive", value); }
        bool lacksResource() const { return ReadField<bool>("lacksResource"); }
        void SetLacksResource(bool value) const { WriteField<bool>("lacksResource", value); }
        int resourceKind() const { return ReadField<int>("resourceKind"); }
        void SetResourceKind(int value) const { WriteField<int>("resourceKind", value); }
    };
}
