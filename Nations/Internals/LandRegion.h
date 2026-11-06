#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class LandRegion : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LandRegion(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "LandRegion") {}
    public:
        int ReclaimedOrigin() const { return ReadStaticField<int>("ReclaimedOrigin"); }
        int originId() const { return ReadField<int>("originId"); }
        void originId(int value) const { WriteField<int>("originId", value); }
        int tiles() const { return ReadField<int>("tiles"); }
        void tiles(int value) const { WriteField<int>("tiles", value); }
        int lastGrewTick() const { return ReadField<int>("lastGrewTick"); }
        void lastGrewTick(int value) const { WriteField<int>("lastGrewTick", value); }
        float settled() const { return ReadField<float>("settled"); }
        void settled(float value) const { WriteField<float>("settled", value); }
        float occupiedShare() const { return ReadField<float>("occupiedShare"); }
        void occupiedShare(float value) const { WriteField<float>("occupiedShare", value); }
        float garrisonPoints() const { return ReadField<float>("garrisonPoints"); }
        void garrisonPoints(float value) const { WriteField<float>("garrisonPoints", value); }
        float garrisonCoverage() const { return ReadField<float>("garrisonCoverage"); }
        void garrisonCoverage(float value) const { WriteField<float>("garrisonCoverage", value); }
    };
}
