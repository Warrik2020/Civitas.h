#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class DivisionKitWidget : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DivisionKitWidget(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "DivisionKitWidget") {}
    public:
        void* root() const { return ReadField<void*>("root"); }
        void SetRoot(void* value) const { WriteField<void*>("root", value); }
        void* label() const { return ReadField<void*>("label"); }
        void SetLabel(void* value) const { WriteField<void*>("label", value); }
        void* value() const { return ReadField<void*>("value"); }
        void SetValue(void* value) const { WriteField<void*>("value", value); }
        void* root() const { return ReadField<void*>("root"); }
        void SetRoot(void* value) const { WriteField<void*>("root", value); }
        void* flag() const { return ReadField<void*>("flag"); }
        void SetFlag(void* value) const { WriteField<void*>("flag", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* count() const { return ReadField<void*>("count"); }
        void SetCount(void* value) const { WriteField<void*>("count", value); }
        int makerShown() const { return ReadField<int>("makerShown"); }
        void SetMakerShown(int value) const { WriteField<int>("makerShown", value); }
        void* spriteShown() const { return ReadField<void*>("spriteShown"); }
        void SetSpriteShown(void* value) const { WriteField<void*>("spriteShown", value); }
    };
}
