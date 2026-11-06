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
        void SetPeopleMinStateFrac(float value) const { WriteStaticField<float>("PeopleMinStateFrac", value); }
        float BigPartFrac() const { return ReadStaticField<float>("BigPartFrac"); }
        void SetBigPartFrac(float value) const { WriteStaticField<float>("BigPartFrac", value); }
        float BigPartStateFrac() const { return ReadStaticField<float>("BigPartStateFrac"); }
        void SetBigPartStateFrac(float value) const { WriteStaticField<float>("BigPartStateFrac", value); }
        int BigPartSearchCap() const { return ReadStaticField<int>("BigPartSearchCap"); }
        void SetBigPartSearchCap(int value) const { WriteStaticField<int>("BigPartSearchCap", value); }
        float SeaHopStateWidths() const { return ReadStaticField<float>("SeaHopStateWidths"); }
        void SetSeaHopStateWidths(float value) const { WriteStaticField<float>("SeaHopStateWidths", value); }
        int SeaHopMin() const { return ReadStaticField<int>("SeaHopMin"); }
        void SetSeaHopMin(int value) const { WriteStaticField<int>("SeaHopMin", value); }
        int SeaHopMax() const { return ReadStaticField<int>("SeaHopMax"); }
        void SetSeaHopMax(int value) const { WriteStaticField<int>("SeaHopMax", value); }
        float FoundStatesMinReach() const { return ReadStaticField<float>("FoundStatesMinReach"); }
        void SetFoundStatesMinReach(float value) const { WriteStaticField<float>("FoundStatesMinReach", value); }
        float FreedTruceYears() const { return ReadStaticField<float>("FreedTruceYears"); }
        void SetFreedTruceYears(float value) const { WriteStaticField<float>("FreedTruceYears", value); }
        float OwnPeopleMinShare() const { return ReadStaticField<float>("OwnPeopleMinShare"); }
        void SetOwnPeopleMinShare(float value) const { WriteStaticField<float>("OwnPeopleMinShare", value); }
        float ClaimWeight() const { return ReadStaticField<float>("ClaimWeight"); }
        void SetClaimWeight(float value) const { WriteStaticField<float>("ClaimWeight", value); }
        float ContactWeight() const { return ReadStaticField<float>("ContactWeight"); }
        void SetContactWeight(float value) const { WriteStaticField<float>("ContactWeight", value); }
        float DistanceWeight() const { return ReadStaticField<float>("DistanceWeight"); }
        void SetDistanceWeight(float value) const { WriteStaticField<float>("DistanceWeight", value); }
    };
}
