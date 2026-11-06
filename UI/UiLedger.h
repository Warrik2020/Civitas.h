#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiLedger : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiLedger(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiLedger") {}
    public:
        void* Build(void* parent, void* incomeColor, void* expenseColor) const { void* args[] = { parent, incomeColor, expenseColor }; return CallStatic("Build", args, 3); }
        void* AddSection(void* parent, const char* title) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(title ? title : "") : nullptr; void* args[] = { parent, managed_1 }; return CallStatic("AddSection", args, 2); }
        void SetMoney(void* label, float value, void* sb, bool fine = false) const { void* args[] = { label, &value, sb, &fine }; CallStatic("SetMoney", args, 4); }
        void* DefaultIncome() const { return ReadStaticField<void*>("DefaultIncome"); }
        void* DefaultExpense() const { return ReadStaticField<void*>("DefaultExpense"); }
        void* Divider() const { return ReadStaticField<void*>("Divider"); }
        float ValueWidth() const { return ReadStaticField<float>("ValueWidth"); }
    };
}
