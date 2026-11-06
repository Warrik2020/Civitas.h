#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class ArmourShapes : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ArmourShapes(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "ArmourShapes") {}
    public:
        void* Left(void* right) const { void* args[] = { right }; return CallStatic("Left", args, 1); }
        void* Skull(float bottomY = 1655f, float halfWidth = 90f, float crown = 1774f) const { void* args[] = { &bottomY, &halfWidth, &crown }; return CallStatic("Skull", args, 3); }
        void* Visor(float y0 = 1615f, float y1 = 1668f, float halfWidth = 72f) const { void* args[] = { &y0, &y1, &halfWidth }; return CallStatic("Visor", args, 3); }
        void* CheekGuard() const { return CallStatic("CheekGuard", nullptr, 0); }
        void* NeckGuard() const { return CallStatic("NeckGuard", nullptr, 0); }
        void* Crest() const { return CallStatic("Crest", nullptr, 0); }
        void* Gorget() const { return CallStatic("Gorget", nullptr, 0); }
        void* Breastplate(float bottomY = 1000f, float topY = 1465f, float scale = 1f) const { void* args[] = { &bottomY, &topY, &scale }; return CallStatic("Breastplate", args, 3); }
        void* Backplate(float bottomY = 1010f) const { void* args[] = { &bottomY }; return CallStatic("Backplate", args, 1); }
        void* Coat(float bottomY = 850f, float sleeveY = 1100f) const { void* args[] = { &bottomY, &sleeveY }; return CallStatic("Coat", args, 2); }
        void* Padding(float bottomY = 960f) const { void* args[] = { &bottomY }; return CallStatic("Padding", args, 1); }
        void* Pauldron() const { return CallStatic("Pauldron", nullptr, 0); }
        void* Vambrace() const { return CallStatic("Vambrace", nullptr, 0); }
        void* UpperCannon() const { return CallStatic("UpperCannon", nullptr, 0); }
        void* Gauntlet() const { return CallStatic("Gauntlet", nullptr, 0); }
        void* Cuisse(float bottomY = 560f) const { void* args[] = { &bottomY }; return CallStatic("Cuisse", args, 1); }
        void* Greave(float topY = 440f) const { void* args[] = { &topY }; return CallStatic("Greave", args, 1); }
        void* Tasset() const { return CallStatic("Tasset", nullptr, 0); }
        void* GroinGuard() const { return CallStatic("GroinGuard", nullptr, 0); }
        void* Belt() const { return CallStatic("Belt", nullptr, 0); }
        void* Pouch(float x0 = -142f, float x1 = -62f, float y0 = 880f, float y1 = 990f) const { void* args[] = { &x0, &x1, &y0, &y1 }; return CallStatic("Pouch", args, 4); }
        void* ChestPouch(float x0 = -120f, float x1 = -40f) const { void* args[] = { &x0, &x1 }; return CallStatic("ChestPouch", args, 2); }
        void* Canteen() const { return CallStatic("Canteen", nullptr, 0); }
        void* Actuator() const { return CallStatic("Actuator", nullptr, 0); }
        void* PowerCell() const { return CallStatic("PowerCell", nullptr, 0); }
        void* Sensor() const { return CallStatic("Sensor", nullptr, 0); }
        void* Disc(float cx, float cy, float radius, int sides = 12) const { void* args[] = { &cx, &cy, &radius, &sides }; return CallStatic("Disc", args, 4); }
        void* Default_(int kind) const { void* args[] = { &kind }; return CallStatic("Default", args, 1); }
    };
}
