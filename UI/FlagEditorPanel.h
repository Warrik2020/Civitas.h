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
        void OpenFor(int nationId) const { void* args[] = { &nationId }; CallStatic("OpenFor", args, 1); }
        void OpenDraft(const char* title, void* seed, void* color, void* onSaved) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(title ? title : "") : nullptr; void* args[] = { managed_0, seed, color, onSaved }; CallStatic("OpenDraft", args, 4); }
        void* go() const { return ReadField<void*>("go"); }
        void SetGo(void* value) const { WriteField<void*>("go", value); }
        void* art() const { return ReadField<void*>("art"); }
        void SetArt(void* value) const { WriteField<void*>("art", value); }
        void* label() const { return ReadField<void*>("label"); }
        void SetLabel(void* value) const { WriteField<void*>("label", value); }
        int index() const { return ReadField<int>("index"); }
        void SetIndex(int value) const { WriteField<int>("index", value); }
    };
}
