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
        void armed(bool value) const { WriteField<bool>("armed", value); }
        bool tracked() const { return ReadField<bool>("tracked"); }
        void tracked(bool value) const { WriteField<bool>("tracked", value); }
        bool wheeled() const { return ReadField<bool>("wheeled"); }
        void wheeled(bool value) const { WriteField<bool>("wheeled", value); }
        float minTonnes() const { return ReadField<float>("minTonnes"); }
        void minTonnes(float value) const { WriteField<float>("minTonnes", value); }
        float maxTonnes() const { return ReadField<float>("maxTonnes"); }
        void maxTonnes(float value) const { WriteField<float>("maxTonnes", value); }
        float maxGroundKpa() const { return ReadField<float>("maxGroundKpa"); }
        void maxGroundKpa(float value) const { WriteField<float>("maxGroundKpa", value); }
        float minWidthMm() const { return ReadField<float>("minWidthMm"); }
        void minWidthMm(float value) const { WriteField<float>("minWidthMm", value); }
        float maxWidthMm() const { return ReadField<float>("maxWidthMm"); }
        void maxWidthMm(float value) const { WriteField<float>("maxWidthMm", value); }
        int baseCrew() const { return ReadField<int>("baseCrew"); }
        void baseCrew(int value) const { WriteField<int>("baseCrew", value); }
        int wheelsAcross() const { return ReadField<int>("wheelsAcross"); }
        void wheelsAcross(int value) const { WriteField<int>("wheelsAcross", value); }
        float issueShare() const { return ReadField<float>("issueShare"); }
        void issueShare(float value) const { WriteField<float>("issueShare", value); }
        void* parts() const { return ReadField<void*>("parts"); }
        void parts(void* value) const { WriteField<void*>("parts", value); }
        void* required() const { return ReadField<void*>("required"); }
        void required(void* value) const { WriteField<void*>("required", value); }
        void* anyOf() const { return ReadField<void*>("anyOf"); }
        void anyOf(void* value) const { WriteField<void*>("anyOf", value); }
    };
}
