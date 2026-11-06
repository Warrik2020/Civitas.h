#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class WeaponGeometry : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WeaponGeometry(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "WeaponGeometry") {}
    public:
        float SignedArea(void* p) const { void* args[] = { p }; return CallStaticValue<float>("SignedArea", args, 1); }
        float Area(void* p) const { void* args[] = { p }; return CallStaticValue<float>("Area", args, 1); }
        bool Bounds(void* p, void* min, void* max) const { void* args[] = { p, &min, &max }; return CallStaticValue<bool>("Bounds", args, 3); }
        void* Centroid(void* p) const { void* args[] = { p }; return CallStatic("Centroid", args, 1); }
        void Translate(void* p, void* d) const { void* args[] = { p, d }; CallStatic("Translate", args, 2); }
        void ScaleAbout(void* p, void* pivot, float sx, float sy) const { void* args[] = { p, pivot, &sx, &sy }; CallStatic("ScaleAbout", args, 4); }
        bool Contains(void* p, void* q) const { void* args[] = { p, q }; return CallStaticValue<bool>("Contains", args, 2); }
        float DistanceToSegment(void* a, void* b, void* q) const { void* args[] = { a, b, q }; return CallStaticValue<float>("DistanceToSegment", args, 3); }
        bool SegmentsIntersect(void* a, void* b, void* c, void* d) const { void* args[] = { a, b, c, d }; return CallStaticValue<bool>("SegmentsIntersect", args, 4); }
        float Distance(void* a, void* b) const { void* args[] = { a, b }; return CallStaticValue<float>("Distance", args, 2); }
        bool Touch(void* a, void* b, float toleranceMm) const { void* args[] = { a, b, &toleranceMm }; return CallStaticValue<bool>("Touch", args, 3); }
        bool SelfIntersects(void* p) const { void* args[] = { p }; return CallStaticValue<bool>("SelfIntersects", args, 1); }
        void EnsureCcw(void* p) const { void* args[] = { p }; CallStatic("EnsureCcw", args, 1); }
        float DistanceToEdge(void* p, void* q, int& edge) const { void* args[] = { p, q, &edge }; return CallStaticValue<float>("DistanceToEdge", args, 3); }
        bool Triangulate(void* p, void* tris) const { void* args[] = { p, tris }; return CallStaticValue<bool>("Triangulate", args, 2); }
        void* Rect(float x0, float y0, float x1, float y1) const { void* args[] = { &x0, &y0, &x1, &y1 }; return CallStatic("Rect", args, 4); }
        void* Quad(float ax, float ay, float bx, float by, float cx, float cy, float dx, float dy) const { void* args[] = { &ax, &ay, &bx, &by, &cx, &cy, &dx, &dy }; return CallStatic("Quad", args, 8); }
        void* Copy(void* p) const { void* args[] = { p }; return CallStatic("Copy", args, 1); }
        float IntersectionArea(void* subject, void* convexClip) const { void* args[] = { subject, convexClip }; return CallStaticValue<float>("IntersectionArea", args, 2); }
        float IntersectionArea(void* subject, void* convexClip, void* centroid) const { void* args[] = { subject, convexClip, &centroid }; return CallStaticValue<float>("IntersectionArea", args, 3); }
        void* ClipHalfPlaneX(void* subject, float side) const { void* args[] = { subject, &side }; return CallStatic("ClipHalfPlaneX", args, 2); }
        int MaxXVertex(void* p) const { void* args[] = { p }; return CallStaticValue<int>("MaxXVertex", args, 1); }
        float VertexAngle(void* p, int i) const { void* args[] = { p, &i }; return CallStaticValue<float>("VertexAngle", args, 2); }
        float LowerEdgeLength(void* p) const { void* args[] = { p }; return CallStaticValue<float>("LowerEdgeLength", args, 1); }
        float UpperEdgeLength(void* p) const { void* args[] = { p }; return CallStaticValue<float>("UpperEdgeLength", args, 1); }
        float ForwardEdgeLength(void* p) const { void* args[] = { p }; return CallStaticValue<float>("ForwardEdgeLength", args, 1); }
    };
}
