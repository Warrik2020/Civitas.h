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
        void id(void* value) const { WriteField<void*>("id", value); }
        void* title() const { return ReadField<void*>("title"); }
        void title(void* value) const { WriteField<void*>("title", value); }
        void* hint() const { return ReadField<void*>("hint"); }
        void hint(void* value) const { WriteField<void*>("hint", value); }
        int level() const { return ReadField<int>("level"); }
        void level(int value) const { WriteField<int>("level", value); }
        void* icon() const { return ReadField<void*>("icon"); }
        void icon(void* value) const { WriteField<void*>("icon", value); }
        void* glyph() const { return ReadField<void*>("glyph"); }
        void glyph(void* value) const { WriteField<void*>("glyph", value); }
        int count() const { return ReadField<int>("count"); }
        void count(int value) const { WriteField<int>("count", value); }
        void* open() const { return ReadField<void*>("open"); }
        void open(void* value) const { WriteField<void*>("open", value); }
    };
}
