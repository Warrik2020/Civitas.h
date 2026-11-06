#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Military
{
    class PlanToolbar : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PlanToolbar(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Military", "PlanToolbar") {}
    public:
        bool DockSpan(float& left, float& right) const { void* args[] = { &left, &right }; return CallStaticValue<bool>("DockSpan", args, 2); }
        void ToggleGroupExecute(void* g) const { void* args[] = { g }; CallStatic("ToggleGroupExecute", args, 1); }
        void* go() const { return ReadField<void*>("go"); }
        void SetGo(void* value) const { WriteField<void*>("go", value); }
        void* face() const { return ReadField<void*>("face"); }
        void SetFace(void* value) const { WriteField<void*>("face", value); }
        void* ring() const { return ReadField<void*>("ring"); }
        void SetRing(void* value) const { WriteField<void*>("ring", value); }
        void* icon() const { return ReadField<void*>("icon"); }
        void SetIcon(void* value) const { WriteField<void*>("icon", value); }
        void* word() const { return ReadField<void*>("word"); }
        void SetWord(void* value) const { WriteField<void*>("word", value); }
        void* key() const { return ReadField<void*>("key"); }
        void SetKey(void* value) const { WriteField<void*>("key", value); }
        void* status() const { return ReadField<void*>("status"); }
        void SetStatus(void* value) const { WriteField<void*>("status", value); }
        void* fade() const { return ReadField<void*>("fade"); }
        void SetFade(void* value) const { WriteField<void*>("fade", value); }
        bool enabled() const { return ReadField<bool>("enabled"); }
        void SetEnabled(bool value) const { WriteField<bool>("enabled", value); }
        bool lit() const { return ReadField<bool>("lit"); }
        void SetLit(bool value) const { WriteField<bool>("lit", value); }
        bool gold() const { return ReadField<bool>("gold"); }
        void SetGold(bool value) const { WriteField<bool>("gold", value); }
        void* why() const { return ReadField<void*>("why"); }
        void SetWhy(void* value) const { WriteField<void*>("why", value); }
        void* onClick() const { return ReadField<void*>("onClick"); }
        void SetOnClick(void* value) const { WriteField<void*>("onClick", value); }
        void* go() const { return ReadField<void*>("go"); }
        void SetGo(void* value) const { WriteField<void*>("go", value); }
        void* face() const { return ReadField<void*>("face"); }
        void SetFace(void* value) const { WriteField<void*>("face", value); }
        void* swatch() const { return ReadField<void*>("swatch"); }
        void SetSwatch(void* value) const { WriteField<void*>("swatch", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* info() const { return ReadField<void*>("info"); }
        void SetInfo(void* value) const { WriteField<void*>("info", value); }
        void* army() const { return ReadField<void*>("army"); }
        void SetArmy(void* value) const { WriteField<void*>("army", value); }
    };
}
