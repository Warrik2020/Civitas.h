#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiFlyout : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiFlyout(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiFlyout") {}
    public:
        void Show(void* anchor, const char* key, const char* title, const char* subtitle, void* items, const char* footer = nullptr) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* managed_2 = Api() && Api()->NewString ? Api()->NewString(title ? title : "") : nullptr; void* managed_3 = Api() && Api()->NewString ? Api()->NewString(subtitle ? subtitle : "") : nullptr; void* managed_5 = Api() && Api()->NewString ? Api()->NewString(footer ? footer : "") : nullptr; void* args[] = { anchor, managed_1, managed_2, managed_3, items, managed_5 }; CallStatic("Show", args, 6); }
        void Hide() const { CallStatic("Hide", nullptr, 0); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* status() const { return ReadField<void*>("status"); }
        void SetStatus(void* value) const { WriteField<void*>("status", value); }
        void* action() const { return ReadField<void*>("action"); }
        void SetAction(void* value) const { WriteField<void*>("action", value); }
        void* chip() const { return ReadField<void*>("chip"); }
        void SetChip(void* value) const { WriteField<void*>("chip", value); }
        bool enabled() const { return ReadField<bool>("enabled"); }
        void SetEnabled(bool value) const { WriteField<bool>("enabled", value); }
        bool highlight() const { return ReadField<bool>("highlight"); }
        void SetHighlight(bool value) const { WriteField<bool>("highlight", value); }
        bool gold() const { return ReadField<bool>("gold"); }
        void SetGold(bool value) const { WriteField<bool>("gold", value); }
        void* onClick() const { return ReadField<void*>("onClick"); }
        void SetOnClick(void* value) const { WriteField<void*>("onClick", value); }
        void* tip() const { return ReadField<void*>("tip"); }
        void SetTip(void* value) const { WriteField<void*>("tip", value); }
        void* action2() const { return ReadField<void*>("action2"); }
        void SetAction2(void* value) const { WriteField<void*>("action2", value); }
        void* action3() const { return ReadField<void*>("action3"); }
        void SetAction3(void* value) const { WriteField<void*>("action3", value); }
        bool enabled2() const { return ReadField<bool>("enabled2"); }
        void SetEnabled2(bool value) const { WriteField<bool>("enabled2", value); }
        bool enabled3() const { return ReadField<bool>("enabled3"); }
        void SetEnabled3(bool value) const { WriteField<bool>("enabled3", value); }
        bool danger2() const { return ReadField<bool>("danger2"); }
        void SetDanger2(bool value) const { WriteField<bool>("danger2", value); }
        bool danger3() const { return ReadField<bool>("danger3"); }
        void SetDanger3(bool value) const { WriteField<bool>("danger3", value); }
        bool lit2() const { return ReadField<bool>("lit2"); }
        void SetLit2(bool value) const { WriteField<bool>("lit2", value); }
        bool lit3() const { return ReadField<bool>("lit3"); }
        void SetLit3(bool value) const { WriteField<bool>("lit3", value); }
        void* onClick2() const { return ReadField<void*>("onClick2"); }
        void SetOnClick2(void* value) const { WriteField<void*>("onClick2", value); }
        void* onClick3() const { return ReadField<void*>("onClick3"); }
        void SetOnClick3(void* value) const { WriteField<void*>("onClick3", value); }
        void* tip2() const { return ReadField<void*>("tip2"); }
        void SetTip2(void* value) const { WriteField<void*>("tip2", value); }
        void* tip3() const { return ReadField<void*>("tip3"); }
        void SetTip3(void* value) const { WriteField<void*>("tip3", value); }
        void* go() const { return ReadField<void*>("go"); }
        void SetGo(void* value) const { WriteField<void*>("go", value); }
        void* wash() const { return ReadField<void*>("wash"); }
        void SetWash(void* value) const { WriteField<void*>("wash", value); }
        void* chip() const { return ReadField<void*>("chip"); }
        void SetChip(void* value) const { WriteField<void*>("chip", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* status() const { return ReadField<void*>("status"); }
        void SetStatus(void* value) const { WriteField<void*>("status", value); }
        void* action() const { return ReadField<void*>("action"); }
        void SetAction(void* value) const { WriteField<void*>("action", value); }
        void* action2() const { return ReadField<void*>("action2"); }
        void SetAction2(void* value) const { WriteField<void*>("action2", value); }
        void* action3() const { return ReadField<void*>("action3"); }
        void SetAction3(void* value) const { WriteField<void*>("action3", value); }
        void* actionLabel() const { return ReadField<void*>("actionLabel"); }
        void SetActionLabel(void* value) const { WriteField<void*>("actionLabel", value); }
        void* actionLabel2() const { return ReadField<void*>("actionLabel2"); }
        void SetActionLabel2(void* value) const { WriteField<void*>("actionLabel2", value); }
        void* actionLabel3() const { return ReadField<void*>("actionLabel3"); }
        void SetActionLabel3(void* value) const { WriteField<void*>("actionLabel3", value); }
        void* item() const { return ReadField<void*>("item"); }
        void SetItem(void* value) const { WriteField<void*>("item", value); }
    };
}
