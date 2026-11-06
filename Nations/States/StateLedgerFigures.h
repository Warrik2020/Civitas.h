#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::States
{
    class StateLedgerFigures : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit StateLedgerFigures(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.States", "StateLedgerFigures") {}
    public:
        float taxation() const { return ReadField<float>("taxation"); }
        void SetTaxation(float value) const { WriteField<float>("taxation", value); }
        float trade() const { return ReadField<float>("trade"); }
        void SetTrade(float value) const { WriteField<float>("trade", value); }
        float tributeIn() const { return ReadField<float>("tributeIn"); }
        void SetTributeIn(float value) const { WriteField<float>("tributeIn", value); }
        float corruption() const { return ReadField<float>("corruption"); }
        void SetCorruption(float value) const { WriteField<float>("corruption", value); }
        float administration() const { return ReadField<float>("administration"); }
        void SetAdministration(float value) const { WriteField<float>("administration", value); }
        float military() const { return ReadField<float>("military"); }
        void SetMilitary(float value) const { WriteField<float>("military", value); }
        float spendings() const { return ReadField<float>("spendings"); }
        void SetSpendings(float value) const { WriteField<float>("spendings", value); }
        float tributeOut() const { return ReadField<float>("tributeOut"); }
        void SetTributeOut(float value) const { WriteField<float>("tributeOut", value); }
        float remittedShare() const { return ReadField<float>("remittedShare"); }
        void SetRemittedShare(float value) const { WriteField<float>("remittedShare", value); }
        float incomeShareOfRealm() const { return ReadField<float>("incomeShareOfRealm"); }
        void SetIncomeShareOfRealm(float value) const { WriteField<float>("incomeShareOfRealm", value); }
        float costShareOfRealm() const { return ReadField<float>("costShareOfRealm"); }
        void SetCostShareOfRealm(float value) const { WriteField<float>("costShareOfRealm", value); }
    };
}
