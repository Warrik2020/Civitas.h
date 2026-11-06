#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Llm
{
    class DiplomaticOffer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DiplomaticOffer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Llm", "DiplomaticOffer") {}
    public:
        bool NeedsParams(int v) const { void* __callArgs[] = { &v }; return CallStaticValue<bool>("NeedsParams", __callArgs, 1); }
        int verb() const { return ReadField<int>("verb"); }
        void verb(int value) const { WriteField<int>("verb", value); }
        int themId() const { return ReadField<int>("themId"); }
        void themId(int value) const { WriteField<int>("themId", value); }
        int playerId() const { return ReadField<int>("playerId"); }
        void playerId(int value) const { WriteField<int>("playerId", value); }
        float gold() const { return ReadField<float>("gold"); }
        void gold(float value) const { WriteField<float>("gold", value); }
        int unionKind() const { return ReadField<int>("unionKind"); }
        void unionKind(int value) const { WriteField<int>("unionKind", value); }
        void* text() const { return ReadField<void*>("text"); }
        void text(void* value) const { WriteField<void*>("text", value); }
        float rate() const { return ReadField<float>("rate"); }
        void rate(float value) const { WriteField<float>("rate", value); }
        int years() const { return ReadField<int>("years"); }
        void years(int value) const { WriteField<int>("years", value); }
    };
}
