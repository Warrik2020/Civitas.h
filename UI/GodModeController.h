#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class GodModeController : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit GodModeController(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "GodModeController") {}
    public:
        void ExitEditorMode() const { CallStatic("ExitEditorMode", nullptr, 0); }
        void EnterEditorMode() const { CallStatic("EnterEditorMode", nullptr, 0); }
        void SetGodMode(bool on) const { void* args[] = { &on }; CallStatic("SetGodMode", args, 1); }
        int axis() const { return ReadField<int>("axis"); }
        void SetAxis(int value) const { WriteField<int>("axis", value); }
        int tile() const { return ReadField<int>("tile"); }
        void SetTile(int value) const { WriteField<int>("tile", value); }
        void* mix() const { return ReadField<void*>("mix"); }
        void SetMix(void* value) const { WriteField<void*>("mix", value); }
        void* key() const { return ReadField<void*>("key"); }
        void SetKey(void* value) const { WriteField<void*>("key", value); }
        void* body() const { return ReadField<void*>("body"); }
        void SetBody(void* value) const { WriteField<void*>("body", value); }
        void* caret() const { return ReadField<void*>("caret"); }
        void SetCaret(void* value) const { WriteField<void*>("caret", value); }
        bool open() const { return ReadField<bool>("open"); }
        void SetOpen(bool value) const { WriteField<bool>("open", value); }
    };
}
