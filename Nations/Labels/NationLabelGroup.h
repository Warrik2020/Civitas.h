#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Labels
{
    class NationLabelGroup : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationLabelGroup(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Labels", "NationLabelGroup") {}
    public:
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        void* labels() const { return ReadField<void*>("labels"); }
        bool needsFit() const { return ReadField<bool>("needsFit"); }
        void needsFit(bool value) const { WriteField<bool>("needsFit", value); }
        float nextFitAllowed() const { return ReadField<float>("nextFitAllowed"); }
        void nextFitAllowed(float value) const { WriteField<float>("nextFitAllowed", value); }
        int tileCountAtFit() const { return ReadField<int>("tileCountAtFit"); }
        void tileCountAtFit(int value) const { WriteField<int>("tileCountAtFit", value); }
        int claimsSinceFit() const { return ReadField<int>("claimsSinceFit"); }
        void claimsSinceFit(int value) const { WriteField<int>("claimsSinceFit", value); }
        bool hasFit() const { return ReadField<bool>("hasFit"); }
        void hasFit(bool value) const { WriteField<bool>("hasFit", value); }
    };
}
