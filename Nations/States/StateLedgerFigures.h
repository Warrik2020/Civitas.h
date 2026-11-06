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
        void taxation(float value) const { WriteField<float>("taxation", value); }
        float trade() const { return ReadField<float>("trade"); }
        void trade(float value) const { WriteField<float>("trade", value); }
        float tributeIn() const { return ReadField<float>("tributeIn"); }
        void tributeIn(float value) const { WriteField<float>("tributeIn", value); }
        float corruption() const { return ReadField<float>("corruption"); }
        void corruption(float value) const { WriteField<float>("corruption", value); }
        float administration() const { return ReadField<float>("administration"); }
        void administration(float value) const { WriteField<float>("administration", value); }
        float military() const { return ReadField<float>("military"); }
        void military(float value) const { WriteField<float>("military", value); }
        float spendings() const { return ReadField<float>("spendings"); }
        void spendings(float value) const { WriteField<float>("spendings", value); }
        float tributeOut() const { return ReadField<float>("tributeOut"); }
        void tributeOut(float value) const { WriteField<float>("tributeOut", value); }
        float remittedShare() const { return ReadField<float>("remittedShare"); }
        void remittedShare(float value) const { WriteField<float>("remittedShare", value); }
        float incomeShareOfRealm() const { return ReadField<float>("incomeShareOfRealm"); }
        void incomeShareOfRealm(float value) const { WriteField<float>("incomeShareOfRealm", value); }
        float costShareOfRealm() const { return ReadField<float>("costShareOfRealm"); }
        void costShareOfRealm(float value) const { WriteField<float>("costShareOfRealm", value); }
    };
}
