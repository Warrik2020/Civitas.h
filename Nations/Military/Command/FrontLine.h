#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class FrontLine : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FrontLine(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "FrontLine") {}
    public:
        int PostIndex(int id) const { void* __callArgs[] = { &id }; return CallValue<int>("PostIndex", __callArgs, 1); }
        int armyId() const { return ReadField<int>("armyId"); }
        void armyId(int value) const { WriteField<int>("armyId", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        int64_t borderStamp() const { return ReadField<int64_t>("borderStamp"); }
        void borderStamp(int64_t value) const { WriteField<int64_t>("borderStamp", value); }
        int planVersion() const { return ReadField<int>("planVersion"); }
        void planVersion(int value) const { WriteField<int>("planVersion", value); }
        int borderVersion() const { return ReadField<int>("borderVersion"); }
        void borderVersion(int value) const { WriteField<int>("borderVersion", value); }
        void* pieces() const { return ReadField<void*>("pieces"); }
        void* posts() const { return ReadField<void*>("posts"); }
        int nextPostId() const { return ReadField<int>("nextPostId"); }
        void nextPostId(int value) const { WriteField<int>("nextPostId", value); }
        float length() const { return ReadField<float>("length"); }
        void length(float value) const { WriteField<float>("length", value); }
        int version() const { return ReadField<int>("version"); }
        void version(int value) const { WriteField<int>("version", value); }
        int reachVersion() const { return ReadField<int>("reachVersion"); }
        void reachVersion(int value) const { WriteField<int>("reachVersion", value); }
    };
}
