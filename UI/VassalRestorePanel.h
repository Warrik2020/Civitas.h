#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class VassalRestorePanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit VassalRestorePanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "VassalRestorePanel") {}
    public:
        void Show(int playerId, void* onCreated) const { void* args[] = { &playerId, onCreated }; CallStatic("Show", args, 2); }
        int origin() const { return ReadField<int>("origin"); }
        void SetOrigin(int value) const { WriteField<int>("origin", value); }
        int tiles() const { return ReadField<int>("tiles"); }
        void SetTiles(int value) const { WriteField<int>("tiles", value); }
        void* bg() const { return ReadField<void*>("bg"); }
        void SetBg(void* value) const { WriteField<void*>("bg", value); }
        void* meta() const { return ReadField<void*>("meta"); }
        void SetMeta(void* value) const { WriteField<void*>("meta", value); }
        int groupId() const { return ReadField<int>("groupId"); }
        void SetGroupId(int value) const { WriteField<int>("groupId", value); }
        int tiles() const { return ReadField<int>("tiles"); }
        void SetTiles(int value) const { WriteField<int>("tiles", value); }
        void* bg() const { return ReadField<void*>("bg"); }
        void SetBg(void* value) const { WriteField<void*>("bg", value); }
        void* meta() const { return ReadField<void*>("meta"); }
        void SetMeta(void* value) const { WriteField<void*>("meta", value); }
    };
}
