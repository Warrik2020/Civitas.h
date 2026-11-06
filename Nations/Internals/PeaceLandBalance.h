#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class PeaceLandBalance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeaceLandBalance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "PeaceLandBalance") {}
    public:
        float PeopleMinStateFrac() const { return ReadStaticField<float>("PeopleMinStateFrac"); }
        void PeopleMinStateFrac(float value) const { WriteStaticField<float>("PeopleMinStateFrac", value); }
        float BigPartFrac() const { return ReadStaticField<float>("BigPartFrac"); }
        void BigPartFrac(float value) const { WriteStaticField<float>("BigPartFrac", value); }
        float BigPartStateFrac() const { return ReadStaticField<float>("BigPartStateFrac"); }
        void BigPartStateFrac(float value) const { WriteStaticField<float>("BigPartStateFrac", value); }
        int BigPartSearchCap() const { return ReadStaticField<int>("BigPartSearchCap"); }
        void BigPartSearchCap(int value) const { WriteStaticField<int>("BigPartSearchCap", value); }
        float SeaHopStateWidths() const { return ReadStaticField<float>("SeaHopStateWidths"); }
        void SeaHopStateWidths(float value) const { WriteStaticField<float>("SeaHopStateWidths", value); }
        int SeaHopMin() const { return ReadStaticField<int>("SeaHopMin"); }
        void SeaHopMin(int value) const { WriteStaticField<int>("SeaHopMin", value); }
        int SeaHopMax() const { return ReadStaticField<int>("SeaHopMax"); }
        void SeaHopMax(int value) const { WriteStaticField<int>("SeaHopMax", value); }
        float FoundStatesMinReach() const { return ReadStaticField<float>("FoundStatesMinReach"); }
        void FoundStatesMinReach(float value) const { WriteStaticField<float>("FoundStatesMinReach", value); }
        float FreedTruceYears() const { return ReadStaticField<float>("FreedTruceYears"); }
        void FreedTruceYears(float value) const { WriteStaticField<float>("FreedTruceYears", value); }
        float OwnPeopleMinShare() const { return ReadStaticField<float>("OwnPeopleMinShare"); }
        void OwnPeopleMinShare(float value) const { WriteStaticField<float>("OwnPeopleMinShare", value); }
        float ClaimWeight() const { return ReadStaticField<float>("ClaimWeight"); }
        void ClaimWeight(float value) const { WriteStaticField<float>("ClaimWeight", value); }
        float ContactWeight() const { return ReadStaticField<float>("ContactWeight"); }
        void ContactWeight(float value) const { WriteStaticField<float>("ContactWeight", value); }
        float DistanceWeight() const { return ReadStaticField<float>("DistanceWeight"); }
        void DistanceWeight(float value) const { WriteStaticField<float>("DistanceWeight", value); }
    };
}
