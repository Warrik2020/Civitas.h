#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UltimatumPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UltimatumPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UltimatumPanel") {}
    public:
        void Show(int playerId, int targetId, void* onResolved) const { void* args[] = { &playerId, &targetId, onResolved }; CallStatic("Show", args, 3); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        void* button() const { return ReadField<void*>("button"); }
        void SetButton(void* value) const { WriteField<void*>("button", value); }
        void* frame() const { return ReadField<void*>("frame"); }
        void SetFrame(void* value) const { WriteField<void*>("frame", value); }
        void* title() const { return ReadField<void*>("title"); }
        void SetTitle(void* value) const { WriteField<void*>("title", value); }
        void* note() const { return ReadField<void*>("note"); }
        void SetNote(void* value) const { WriteField<void*>("note", value); }
        int groupId() const { return ReadField<int>("groupId"); }
        void SetGroupId(int value) const { WriteField<int>("groupId", value); }
        void* pill() const { return ReadField<void*>("pill"); }
        void SetPill(void* value) const { WriteField<void*>("pill", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* share() const { return ReadField<void*>("share"); }
        void SetShare(void* value) const { WriteField<void*>("share", value); }
    };
}
