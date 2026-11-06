#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiRenameField : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiRenameField(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiRenameField") {}
    public:
        void* Build(void* parent, void* textColor, void* dimColor, void* onCommit, int characterLimit = 0) const { void* args[] = { parent, textColor, dimColor, onCommit, &characterLimit }; return CallStatic("Build", args, 5); }
        void SetName(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { managed_0 }; Call("SetName", args, 1); }
        void BeginEdit() const { Call("BeginEdit", nullptr, 0); }
        void Cancel() const { Call("Cancel", nullptr, 0); }
    };
}
