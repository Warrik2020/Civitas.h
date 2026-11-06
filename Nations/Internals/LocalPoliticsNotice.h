#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class LocalPoliticsNotice : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LocalPoliticsNotice(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "LocalPoliticsNotice") {}
    public:
        int arcId() const { return ReadField<int>("arcId"); }
        void arcId(int value) const { WriteField<int>("arcId", value); }
        int arcKind() const { return ReadField<int>("arcKind"); }
        void arcKind(int value) const { WriteField<int>("arcKind", value); }
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        int cause() const { return ReadField<int>("cause"); }
        void cause(int value) const { WriteField<int>("cause", value); }
        int flags() const { return ReadField<int>("flags"); }
        void flags(int value) const { WriteField<int>("flags", value); }
        int actor() const { return ReadField<int>("actor"); }
        void actor(int value) const { WriteField<int>("actor", value); }
        int target() const { return ReadField<int>("target"); }
        void target(int value) const { WriteField<int>("target", value); }
        int third() const { return ReadField<int>("third"); }
        void third(int value) const { WriteField<int>("third", value); }
        float value() const { return ReadField<float>("value"); }
        void value(float value) const { WriteField<float>("value", value); }
        int worldTick() const { return ReadField<int>("worldTick"); }
        void worldTick(int value) const { WriteField<int>("worldTick", value); }
    };
}
