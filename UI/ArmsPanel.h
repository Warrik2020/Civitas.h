#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class ArmsPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ArmsPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "ArmsPanel") {}
    public:
        void Toggle() const { Call("Toggle", nullptr, 0); }
        void SetOpen(bool open) const { void* args[] = { &open }; Call("SetOpen", args, 1); }
        void ShowDesigns() const { Call("ShowDesigns", nullptr, 0); }
        void ShowDesigns(int domain) const { void* args[] = { &domain }; Call("ShowDesigns", args, 1); }
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        void* root() const { return ReadField<void*>("root"); }
        void SetRoot(void* value) const { WriteField<void*>("root", value); }
        void* thumb() const { return ReadField<void*>("thumb"); }
        void SetThumb(void* value) const { WriteField<void*>("thumb", value); }
        int thumbKey() const { return ReadField<int>("thumbKey"); }
        void SetThumbKey(int value) const { WriteField<int>("thumbKey", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* detail() const { return ReadField<void*>("detail"); }
        void SetDetail(void* value) const { WriteField<void*>("detail", value); }
        void* status() const { return ReadField<void*>("status"); }
        void SetStatus(void* value) const { WriteField<void*>("status", value); }
        void* score() const { return ReadField<void*>("score"); }
        void SetScore(void* value) const { WriteField<void*>("score", value); }
        void* toolLabel() const { return ReadField<void*>("toolLabel"); }
        void SetToolLabel(void* value) const { WriteField<void*>("toolLabel", value); }
        void* mark() const { return ReadField<void*>("mark"); }
        void SetMark(void* value) const { WriteField<void*>("mark", value); }
        void* tool() const { return ReadField<void*>("tool"); }
        void SetTool(void* value) const { WriteField<void*>("tool", value); }
        void* delete_() const { return ReadField<void*>("delete"); }
        void SetDelete(void* value) const { WriteField<void*>("delete", value); }
    };
}
