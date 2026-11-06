#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class FlagEditorPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FlagEditorPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "FlagEditorPanel") {}
    public:
        void OpenFor(int nationId) const { void* __callArgs[] = { &nationId }; CallStatic("OpenFor", __callArgs, 1); }
        void OpenDraft(const char* title, void* seed, void* color, void* onSaved) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(title ? title : "") : nullptr; void* __callArgs[] = { managed_0, seed, color, onSaved }; CallStatic("OpenDraft", __callArgs, 4); }
    };
}
