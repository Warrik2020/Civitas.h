#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class GiftTerms : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit GiftTerms(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "GiftTerms") {}
    public:
        void Clear() const { Call("Clear", nullptr, 0); }
        int reason() const { return ReadField<int>("reason"); }
        void SetReason(int value) const { WriteField<int>("reason", value); }
        float gold() const { return ReadField<float>("gold"); }
        void SetGold(float value) const { WriteField<float>("gold", value); }
        void* equipment() const { return ReadField<void*>("equipment"); }
        int divisionCount() const { return ReadField<int>("divisionCount"); }
        void SetDivisionCount(int value) const { WriteField<int>("divisionCount", value); }
        bool anyDivisionType() const { return ReadField<bool>("anyDivisionType"); }
        void SetAnyDivisionType(bool value) const { WriteField<bool>("anyDivisionType", value); }
        int divisionType() const { return ReadField<int>("divisionType"); }
        void SetDivisionType(int value) const { WriteField<int>("divisionType", value); }
    };
}
