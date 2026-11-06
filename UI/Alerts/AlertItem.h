#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Alerts
{
    class AlertItem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AlertItem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Alerts", "AlertItem") {}
    public:
        void* id() const { return ReadField<void*>("id"); }
        void SetId(void* value) const { WriteField<void*>("id", value); }
        void* title() const { return ReadField<void*>("title"); }
        void SetTitle(void* value) const { WriteField<void*>("title", value); }
        void* hint() const { return ReadField<void*>("hint"); }
        void SetHint(void* value) const { WriteField<void*>("hint", value); }
        int level() const { return ReadField<int>("level"); }
        void SetLevel(int value) const { WriteField<int>("level", value); }
        void* icon() const { return ReadField<void*>("icon"); }
        void SetIcon(void* value) const { WriteField<void*>("icon", value); }
        void* glyph() const { return ReadField<void*>("glyph"); }
        void SetGlyph(void* value) const { WriteField<void*>("glyph", value); }
        int count() const { return ReadField<int>("count"); }
        void SetCount(int value) const { WriteField<int>("count", value); }
        void* open() const { return ReadField<void*>("open"); }
        void SetOpen(void* value) const { WriteField<void*>("open", value); }
    };
}
