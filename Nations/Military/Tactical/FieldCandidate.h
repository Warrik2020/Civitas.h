#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class FieldCandidate : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FieldCandidate(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "FieldCandidate") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void id(int value) const { WriteField<int>("id", value); }
        int side() const { return ReadField<int>("side"); }
        void side(int value) const { WriteField<int>("side", value); }
        int men() const { return ReadField<int>("men"); }
        void men(int value) const { WriteField<int>("men", value); }
        bool inFight() const { return ReadField<bool>("inFight"); }
        void inFight(bool value) const { WriteField<bool>("inFight", value); }
        bool touchesEnter() const { return ReadField<bool>("touchesEnter"); }
        void touchesEnter(bool value) const { WriteField<bool>("touchesEnter", value); }
        bool touchesLeave() const { return ReadField<bool>("touchesLeave"); }
        void touchesLeave(bool value) const { WriteField<bool>("touchesLeave", value); }
        float distance() const { return ReadField<float>("distance"); }
        void distance(float value) const { WriteField<float>("distance", value); }
        int partnerStart() const { return ReadField<int>("partnerStart"); }
        void partnerStart(int value) const { WriteField<int>("partnerStart", value); }
        int partnerCount() const { return ReadField<int>("partnerCount"); }
        void partnerCount(int value) const { WriteField<int>("partnerCount", value); }
    };
}
