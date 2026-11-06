#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::TimeSkip
{
    class WakeReason : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WakeReason(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.TimeSkip", "WakeReason") {}
    public:
        void* key() const { return ReadField<void*>("key"); }
        void key(void* value) const { WriteField<void*>("key", value); }
        int group() const { return ReadField<int>("group"); }
        void group(int value) const { WriteField<int>("group", value); }
        bool level() const { return ReadField<bool>("level"); }
        void level(bool value) const { WriteField<bool>("level", value); }
        void* text() const { return ReadField<void*>("text"); }
        void text(void* value) const { WriteField<void*>("text", value); }
        int route() const { return ReadField<int>("route"); }
        void route(int value) const { WriteField<int>("route", value); }
        int arg() const { return ReadField<int>("arg"); }
        void arg(int value) const { WriteField<int>("arg", value); }
    };
}
