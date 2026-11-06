#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class MapDock : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapDock(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "MapDock") {}
    public:
        bool ShowFor(void* nations) const { void* args[] = { nations }; return CallStaticValue<bool>("ShowFor", args, 1); }
        float Height() const { return ReadStaticField<float>("Height"); }
        void* root() const { return ReadField<void*>("root"); }
        void SetRoot(void* value) const { WriteField<void*>("root", value); }
        void* lit() const { return ReadField<void*>("lit"); }
        void SetLit(void* value) const { WriteField<void*>("lit", value); }
        void* glyph() const { return ReadField<void*>("glyph"); }
        void SetGlyph(void* value) const { WriteField<void*>("glyph", value); }
        void* on() const { return ReadField<void*>("on"); }
        void SetOn(void* value) const { WriteField<void*>("on", value); }
        bool playerOnly() const { return ReadField<bool>("playerOnly"); }
        void SetPlayerOnly(bool value) const { WriteField<bool>("playerOnly", value); }
    };
}
