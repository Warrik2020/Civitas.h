#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::TimeSkip
{
    class SkipEvent : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SkipEvent(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.TimeSkip", "SkipEvent") {}
    public:
        int tick() const { return ReadField<int>("tick"); }
        void SetTick(int value) const { WriteField<int>("tick", value); }
        void* date() const { return ReadField<void*>("date"); }
        void SetDate(void* value) const { WriteField<void*>("date", value); }
        void* text() const { return ReadField<void*>("text"); }
        void SetText(void* value) const { WriteField<void*>("text", value); }
        int a() const { return ReadField<int>("a"); }
        void SetA(int value) const { WriteField<int>("a", value); }
        int b() const { return ReadField<int>("b"); }
        void SetB(int value) const { WriteField<int>("b", value); }
        bool player() const { return ReadField<bool>("player"); }
        void SetPlayer(bool value) const { WriteField<bool>("player", value); }
        bool estimated() const { return ReadField<bool>("estimated"); }
        void SetEstimated(bool value) const { WriteField<bool>("estimated", value); }
    };
}
