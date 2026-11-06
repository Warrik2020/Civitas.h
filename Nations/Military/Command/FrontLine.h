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
        int PostIndex(int id) const { void* args[] = { &id }; return CallValue<int>("PostIndex", args, 1); }
        int armyId() const { return ReadField<int>("armyId"); }
        void SetArmyId(int value) const { WriteField<int>("armyId", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int64_t borderStamp() const { return ReadField<int64_t>("borderStamp"); }
        void SetBorderStamp(int64_t value) const { WriteField<int64_t>("borderStamp", value); }
        int planVersion() const { return ReadField<int>("planVersion"); }
        void SetPlanVersion(int value) const { WriteField<int>("planVersion", value); }
        int borderVersion() const { return ReadField<int>("borderVersion"); }
        void SetBorderVersion(int value) const { WriteField<int>("borderVersion", value); }
        void* pieces() const { return ReadField<void*>("pieces"); }
        void* posts() const { return ReadField<void*>("posts"); }
        int nextPostId() const { return ReadField<int>("nextPostId"); }
        void SetNextPostId(int value) const { WriteField<int>("nextPostId", value); }
        float length() const { return ReadField<float>("length"); }
        void SetLength(float value) const { WriteField<float>("length", value); }
        int version() const { return ReadField<int>("version"); }
        void SetVersion(int value) const { WriteField<int>("version", value); }
        int reachVersion() const { return ReadField<int>("reachVersion"); }
        void SetReachVersion(int value) const { WriteField<int>("reachVersion", value); }
    };
}
