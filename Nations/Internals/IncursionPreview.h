#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class IncursionPreview : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IncursionPreview(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "IncursionPreview") {}
    public:
        bool valid() const { return ReadField<bool>("valid"); }
        void valid(bool value) const { WriteField<bool>("valid", value); }
        int expected() const { return ReadField<int>("expected"); }
        void expected(int value) const { WriteField<int>("expected", value); }
        int passesToViolation() const { return ReadField<int>("passesToViolation"); }
        void passesToViolation(int value) const { WriteField<int>("passesToViolation", value); }
        float opinionMin() const { return ReadField<float>("opinionMin"); }
        void opinionMin(float value) const { WriteField<float>("opinionMin", value); }
        float opinionMax() const { return ReadField<float>("opinionMax"); }
        void opinionMax(float value) const { WriteField<float>("opinionMax", value); }
        bool truce() const { return ReadField<bool>("truce"); }
        void truce(bool value) const { WriteField<bool>("truce", value); }
        bool pledge() const { return ReadField<bool>("pledge"); }
        void pledge(bool value) const { WriteField<bool>("pledge", value); }
        bool passage() const { return ReadField<bool>("passage"); }
        void passage(bool value) const { WriteField<bool>("passage", value); }
        bool allied() const { return ReadField<bool>("allied"); }
        void allied(bool value) const { WriteField<bool>("allied", value); }
        bool gainsJustification() const { return ReadField<bool>("gainsJustification"); }
        void gainsJustification(bool value) const { WriteField<bool>("gainsJustification", value); }
        void* friends() const { return ReadField<void*>("friends"); }
        void friends(void* value) const { WriteField<void*>("friends", value); }
    };
}
