#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Labels
{
    class NationLabelFitter : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationLabelFitter(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Labels", "NationLabelFitter") {}
    public:
        int Compute(void* grid, int nationId, int minX, int minY, int maxX, int maxY, int maxSlices, float bridgeGapPx, float minAreaFraction, void* results, float nameAspect = 6f, int minAreaTiles = 0, int homeTile = -1) const { void* args[] = { grid, &nationId, &minX, &minY, &maxX, &maxY, &maxSlices, &bridgeGapPx, &minAreaFraction, results, &nameAspect, &minAreaTiles, &homeTile }; return CallStaticValue<int>("Compute", args, 13); }
        int Compute(void* mask, int minX, int minY, int maxX, int maxY, int maxSlices, float bridgeGapPx, float minAreaFraction, void* results, float nameAspect = 6f, int minAreaTiles = 0, int homeTile = -1) const { void* args[] = { mask, &minX, &minY, &maxX, &maxY, &maxSlices, &bridgeGapPx, &minAreaFraction, results, &nameAspect, &minAreaTiles, &homeTile }; return CallStaticValue<int>("Compute", args, 12); }
        int MinAreaTiles(int mapWidth, int mapHeight, float mapShare) const { void* args[] = { &mapWidth, &mapHeight, &mapShare }; return CallStaticValue<int>("MinAreaTiles", args, 3); }
        float AspectOf(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { managed_0 }; return CallStaticValue<float>("AspectOf", args, 1); }
        uint8_t KindAt(int index) const { void* args[] = { &index }; return CallValue<uint8_t>("KindAt", args, 1); }
        void Set(void* inner, void* comp, int target, int minX, int minY, int stride, int pw, int ph) const { void* args[] = { inner, comp, &target, &minX, &minY, &stride, &pw, &ph }; Call("Set", args, 8); }
        uint8_t KindAt(int index) const { void* args[] = { &index }; return CallValue<uint8_t>("KindAt", args, 1); }
        uint8_t KindOther() const { return ReadStaticField<uint8_t>("KindOther"); }
        uint8_t KindNeutral() const { return ReadStaticField<uint8_t>("KindNeutral"); }
        uint8_t KindOurs() const { return ReadStaticField<uint8_t>("KindOurs"); }
        float DefaultAspect() const { return ReadStaticField<float>("DefaultAspect"); }
        bool valid() const { return ReadField<bool>("valid"); }
        void SetValid(bool value) const { WriteField<bool>("valid", value); }
        void* spinePx() const { return ReadField<void*>("spinePx"); }
        void SetSpinePx(void* value) const { WriteField<void*>("spinePx", value); }
        void* halfRoomPx() const { return ReadField<void*>("halfRoomPx"); }
        void SetHalfRoomPx(void* value) const { WriteField<void*>("halfRoomPx", value); }
        void* openRoomPx() const { return ReadField<void*>("openRoomPx"); }
        void SetOpenRoomPx(void* value) const { WriteField<void*>("openRoomPx", value); }
        float minRoomPx() const { return ReadField<float>("minRoomPx"); }
        void SetMinRoomPx(float value) const { WriteField<float>("minRoomPx", value); }
        void* grid() const { return ReadField<void*>("grid"); }
        void SetGrid(void* value) const { WriteField<void*>("grid", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int xMin() const { return ReadField<int>("xMin"); }
        void SetXMin(int value) const { WriteField<int>("xMin", value); }
        int yMin() const { return ReadField<int>("yMin"); }
        void SetYMin(int value) const { WriteField<int>("yMin", value); }
        int xMax() const { return ReadField<int>("xMax"); }
        void SetXMax(int value) const { WriteField<int>("xMax", value); }
        int yMax() const { return ReadField<int>("yMax"); }
        void SetYMax(int value) const { WriteField<int>("yMax", value); }
    };
}
