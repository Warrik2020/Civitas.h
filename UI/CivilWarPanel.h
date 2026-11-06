#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class CivilWarPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CivilWarPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "CivilWarPanel") {}
    public:
        void Show(int playerId, void* report) const { void* args[] = { &playerId, report }; CallStatic("Show", args, 2); }
        int stateId() const { return ReadField<int>("stateId"); }
        void SetStateId(int value) const { WriteField<int>("stateId", value); }
        int tiles() const { return ReadField<int>("tiles"); }
        void SetTiles(int value) const { WriteField<int>("tiles", value); }
        void* bg() const { return ReadField<void*>("bg"); }
        void SetBg(void* value) const { WriteField<void*>("bg", value); }
        void* meta() const { return ReadField<void*>("meta"); }
        void SetMeta(void* value) const { WriteField<void*>("meta", value); }
        int ideology() const { return ReadField<int>("ideology"); }
        void SetIdeology(int value) const { WriteField<int>("ideology", value); }
        bool legal() const { return ReadField<bool>("legal"); }
        void SetLegal(bool value) const { WriteField<bool>("legal", value); }
        void* bg() const { return ReadField<void*>("bg"); }
        void SetBg(void* value) const { WriteField<void*>("bg", value); }
        void* meta() const { return ReadField<void*>("meta"); }
        void SetMeta(void* value) const { WriteField<void*>("meta", value); }
    };
}
