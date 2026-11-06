#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Naval
{
    class VesselState : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit VesselState(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Naval", "VesselState") {}
    public:
        void SnapRender() const { Call("SnapRender", nullptr, 0); }
        float RemainingTiles() const { return CallValue<float>("RemainingTiles", nullptr, 0); }
        int id() const { return ReadField<int>("id"); }
        void id(int value) const { WriteField<int>("id", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        int phase() const { return ReadField<int>("phase"); }
        void phase(int value) const { WriteField<int>("phase", value); }
        int cargoKind() const { return ReadField<int>("cargoKind"); }
        void cargoKind(int value) const { WriteField<int>("cargoKind", value); }
        int cargoId() const { return ReadField<int>("cargoId"); }
        void cargoId(int value) const { WriteField<int>("cargoId", value); }
        void* pos() const { return ReadField<void*>("pos"); }
        void pos(void* value) const { WriteField<void*>("pos", value); }
        void* heading() const { return ReadField<void*>("heading"); }
        void heading(void* value) const { WriteField<void*>("heading", value); }
        int waterTile() const { return ReadField<int>("waterTile"); }
        void waterTile(int value) const { WriteField<int>("waterTile", value); }
        int fromLandTile() const { return ReadField<int>("fromLandTile"); }
        void fromLandTile(int value) const { WriteField<int>("fromLandTile", value); }
        int toLandTile() const { return ReadField<int>("toLandTile"); }
        void toLandTile(int value) const { WriteField<int>("toLandTile", value); }
        void* route() const { return ReadField<void*>("route"); }
        void route(void* value) const { WriteField<void*>("route", value); }
        int routeCount() const { return ReadField<int>("routeCount"); }
        void routeCount(int value) const { WriteField<int>("routeCount", value); }
        int leg() const { return ReadField<int>("leg"); }
        void leg(int value) const { WriteField<int>("leg", value); }
        float legPos() const { return ReadField<float>("legPos"); }
        void legPos(float value) const { WriteField<float>("legPos", value); }
        bool arrived() const { return ReadField<bool>("arrived"); }
        void arrived(bool value) const { WriteField<bool>("arrived", value); }
        void* renderPos() const { return ReadField<void*>("renderPos"); }
        void renderPos(void* value) const { WriteField<void*>("renderPos", value); }
        void* renderVel() const { return ReadField<void*>("renderVel"); }
        void renderVel(void* value) const { WriteField<void*>("renderVel", value); }
        bool renderInit() const { return ReadField<bool>("renderInit"); }
        void renderInit(bool value) const { WriteField<bool>("renderInit", value); }
        float wake() const { return ReadField<float>("wake"); }
        void wake(float value) const { WriteField<float>("wake", value); }
    };
}
