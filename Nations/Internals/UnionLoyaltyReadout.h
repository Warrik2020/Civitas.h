#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class UnionLoyaltyReadout : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnionLoyaltyReadout(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "UnionLoyaltyReadout") {}
    public:
        int memberId() const { return ReadField<int>("memberId"); }
        void memberId(int value) const { WriteField<int>("memberId", value); }
        int rulerId() const { return ReadField<int>("rulerId"); }
        void rulerId(int value) const { WriteField<int>("rulerId", value); }
        int mood() const { return ReadField<int>("mood"); }
        void mood(int value) const { WriteField<int>("mood", value); }
        float contentment() const { return ReadField<float>("contentment"); }
        void contentment(float value) const { WriteField<float>("contentment", value); }
        float contentmentLine() const { return ReadField<float>("contentmentLine"); }
        void contentmentLine(float value) const { WriteField<float>("contentmentLine", value); }
        float regard() const { return ReadField<float>("regard"); }
        void regard(float value) const { WriteField<float>("regard", value); }
        float opinion() const { return ReadField<float>("opinion"); }
        void opinion(float value) const { WriteField<float>("opinion", value); }
        float regardLine() const { return ReadField<float>("regardLine"); }
        void regardLine(float value) const { WriteField<float>("regardLine", value); }
        int graceLeft() const { return ReadField<int>("graceLeft"); }
        void graceLeft(int value) const { WriteField<int>("graceLeft", value); }
        int shieldLeft() const { return ReadField<int>("shieldLeft"); }
        void shieldLeft(int value) const { WriteField<int>("shieldLeft", value); }
        int nextReviewIn() const { return ReadField<int>("nextReviewIn"); }
        void nextReviewIn(int value) const { WriteField<int>("nextReviewIn", value); }
    };
}
