#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class Sentiment : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Sentiment(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "Sentiment") {}
    public:
        int judge() const { return ReadField<int>("judge"); }
        void SetJudge(int value) const { WriteField<int>("judge", value); }
        int target() const { return ReadField<int>("target"); }
        void SetTarget(int value) const { WriteField<int>("target", value); }
        int third() const { return ReadField<int>("third"); }
        void SetThird(int value) const { WriteField<int>("third", value); }
        int arcId() const { return ReadField<int>("arcId"); }
        void SetArcId(int value) const { WriteField<int>("arcId", value); }
        int worldTick() const { return ReadField<int>("worldTick"); }
        void SetWorldTick(int value) const { WriteField<int>("worldTick", value); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        float value() const { return ReadField<float>("value"); }
        void SetValue(float value) const { WriteField<float>("value", value); }
        bool used() const { return ReadField<bool>("used"); }
        void SetUsed(bool value) const { WriteField<bool>("used", value); }
    };
}
