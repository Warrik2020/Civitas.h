#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class VehicleKindSpec : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit VehicleKindSpec(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "VehicleKindSpec") {}
    public:
        bool armed() const { return ReadField<bool>("armed"); }
        void SetArmed(bool value) const { WriteField<bool>("armed", value); }
        bool tracked() const { return ReadField<bool>("tracked"); }
        void SetTracked(bool value) const { WriteField<bool>("tracked", value); }
        bool wheeled() const { return ReadField<bool>("wheeled"); }
        void SetWheeled(bool value) const { WriteField<bool>("wheeled", value); }
        float minTonnes() const { return ReadField<float>("minTonnes"); }
        void SetMinTonnes(float value) const { WriteField<float>("minTonnes", value); }
        float maxTonnes() const { return ReadField<float>("maxTonnes"); }
        void SetMaxTonnes(float value) const { WriteField<float>("maxTonnes", value); }
        float maxGroundKpa() const { return ReadField<float>("maxGroundKpa"); }
        void SetMaxGroundKpa(float value) const { WriteField<float>("maxGroundKpa", value); }
        float minWidthMm() const { return ReadField<float>("minWidthMm"); }
        void SetMinWidthMm(float value) const { WriteField<float>("minWidthMm", value); }
        float maxWidthMm() const { return ReadField<float>("maxWidthMm"); }
        void SetMaxWidthMm(float value) const { WriteField<float>("maxWidthMm", value); }
        int baseCrew() const { return ReadField<int>("baseCrew"); }
        void SetBaseCrew(int value) const { WriteField<int>("baseCrew", value); }
        int wheelsAcross() const { return ReadField<int>("wheelsAcross"); }
        void SetWheelsAcross(int value) const { WriteField<int>("wheelsAcross", value); }
        float issueShare() const { return ReadField<float>("issueShare"); }
        void SetIssueShare(float value) const { WriteField<float>("issueShare", value); }
        void* parts() const { return ReadField<void*>("parts"); }
        void SetParts(void* value) const { WriteField<void*>("parts", value); }
        void* required() const { return ReadField<void*>("required"); }
        void SetRequired(void* value) const { WriteField<void*>("required", value); }
        void* anyOf() const { return ReadField<void*>("anyOf"); }
        void SetAnyOf(void* value) const { WriteField<void*>("anyOf", value); }
    };
}
